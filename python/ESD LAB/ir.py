import RPi.GPIO as GPIO
import time
 sensor = 16
GPIO.setmode(GPIO.BOARD)
GPIO.setup(sensor,GPIO.IN)
print "IR Sensor Ready....."
print " "
while True:
      if GPIO.input(sensor):
          print "No Object Detected"
          while GPIO.input(sensor):
              time.sleep(1)
      else:
          print "Object Detected"
          time.sleep(1)