from random import randint

class train:
    def __init__(self, trainNo):
        self.trainNo = trainNo
        

    def book(self, fro, to):
        print(f"Train is booked in trainNo : {self.trainNo} from {fro} to {to}.")
        

    def getStatus(self):
        print(f"Train {self.trainNo} running on time.")
        

    def getFare(self, fro, to):
        print(f"Ticket fare in trainNo : {self.trainNo} from {fro} to {to} is {randint(225,55555)}.")

t = train(12377)
t.book("Rampur", "Delhi")
t.getStatus()
t.getFare("Rampur", "Delhi")

        

