import pandas as pd
import matplotlib.pyplot as plt

# Load the data
data = pd.read_csv("insertion_sort_data.csv")

# Plot the graph
plt.plot(data["Number_of_Elements"], data["Time_Taken_ms"], marker='o', linestyle='-')
plt.xlabel("Number of Elements")
plt.ylabel("Time Taken (ms)")
plt.title("Insertion Sort Time Complexity")
plt.grid()
plt.show()
