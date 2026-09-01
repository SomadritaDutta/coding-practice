# Install an external module and perform an operation using it./
import pyttsx3
# Initialize the TTS engine
engine = pyttsx3.init()
# Convert text to speech
engine.say("Hey i am good")
# Wait for the speech to finish
engine.runAndWait()