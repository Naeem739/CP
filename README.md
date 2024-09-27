# Codeforces Data Fetcher

This project fetches the total solve count from Codeforces for a specified user handle. In this case, the handle used is **ByteBlast**.

## Getting Started

To run the script, you need Python and the `requests` library installed. You can install the `requests` library using:

```bash
pip install requests
import requests

def fetch_solve_count(handle):
    url = f'https://codeforces.com/api/user.status?handle={handle}'
    response = requests.get(url)
    data = response.json()
    
    if data['status'] == 'OK':
        # Count the number of solved problems
        solves = sum(1 for submission in data['result'] if submission['verdict'] == 'OK')
        return solves
    else:
        print("Error fetching data.")
        return None

if __name__ == "__main__":
    handle = "ByteBlast"
    total_solves = fetch_solve_count(handle)
    if total_solves is not None:
        print(f'Total problems solved by {handle}: {total_solves}')
    else:
        print("Failed to retrieve solve count.")
