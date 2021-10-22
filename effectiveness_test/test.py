import os
import subprocess


dir = "/home/sol/internship/inputs"

i = 0

subprocess.Popen('mkdir findings', shell=True)

while True:
    print("[+] Cycle started")
    for filename in os.listdir(dir):
        s1 = subprocess.Popen('cat /home/sol/internship/inputs/{} | radamsa > current_input'.format(filename), shell=True)
        s1.communicate()

        result1 = subprocess.Popen('cat ./current_input | ../hammer/modbus 1> output 2> output', shell=True)
        result1.communicate()
        rc1 = result1.returncode
        print(rc1)

        result2 = subprocess.Popen('cat ./current_input | ../spicy/parser 1> output 2> output', shell=True)
        result2.communicate()
        rc2 = result2.returncode
        print(rc2)

        result3 = subprocess.Popen('../kaitai/parser ./current_input 1> output 2> output', shell=True)
        result3.communicate()
        rc3 = result3.returncode
        print(rc3)

        print(rc1, rc2, rc3)

        if rc1 != rc2 or rc1 != rc3 or rc2 != rc3:
            subprocess.Popen('cp ./current_input ./findings/{}-{}{}{}'.format(i, rc1, rc2, rc3), shell=True)
            i += 1
            print("Inconsistency found! {} - {} {} {}".format(i, rc1, rc2, rc3))
    print("[+] Cycle completed")
