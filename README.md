### Code Example

Here’s the Python script that fetches the total solve count from Codeforces:

```python
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
