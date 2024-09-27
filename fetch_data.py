import requests
import time

def fetch_user_status(handle):
    url = f'https://codeforces.com/api/user.status?handle={handle}'
    response = requests.get(url)
    
    if response.status_code != 200:
        print(f"Error fetching data: {response.status_code}")
        return None

    data = response.json()
    if data['status'] != 'OK':
        print("Error in response data.")
        return None
    
    return data['result']

def count_solves(submissions):
    return sum(1 for submission in submissions if submission['verdict'] == 'OK')

if __name__ == "__main__":
    handles = ["ByteBlast", "AreFin_Naeem"]  # List of handles to check

    for handle in handles:
        submissions = fetch_user_status(handle)
        
        if submissions is not None:
            total_solves = count_solves(submissions)
            print(f'Total problems solved by {handle}: {total_solves}')
        else:
            print(f"Failed to retrieve submissions for {handle}.")
