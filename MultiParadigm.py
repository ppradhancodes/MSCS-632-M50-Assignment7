class StatisticsCalculator:
    def __init__(self, data):
        self.data = data
        
    def mean(self):
        return sum(self.data) / len(self.data)
    
    def median(self):
        sorted_data = sorted(self.data)
        n = len(sorted_data)
        mid = n // 2
        return (sorted_data[mid] + sorted_data[mid-1])/2 if n%2 == 0 else sorted_data[mid]
    
    def mode(self):
        frequency = {}
        for num in self.data:
            frequency[num] = frequency.get(num, 0) + 1
        max_freq = max(frequency.values())
        return [k for k, v in frequency.items() if v == max_freq]
