import os
import subprocess


dir = "/home/sol/internship/effectiveness_test/findings"

i = 0

subprocess.Popen('mkdir findings', shell=True)

print("[+] Cycle started")
for filename in os.listdir(dir):
	print("[+]", filename, "---------------")
	result1 = subprocess.Popen('cat ./findings/{} | ../hammer/modbus'.format(filename), shell=True)
	result1.communicate()

	result2 = subprocess.Popen('cat ./findings/{}| ../spicy/parser'.format(filename), shell=True)
	result2.communicate()

	result3 = subprocess.Popen('../kaitai/parser ./findings/{}'.format(filename), shell=True)
	result3.communicate()

print("[+] Cycle completed")
