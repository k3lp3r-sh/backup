import time
import pyautogui as pyg
import random

def main():
    while True:
        dec1 = random.random()
        dec2 = random.random()
        sleepTimer = 1.234 + dec1 + dec2
        time.sleep(sleepTimer)

        pyg.doubleClick(683, 787)
        pyg.hotkey("ctrl", "c")

        time.sleep(dec1 + dec2)
        
        pyg.click(701,1043)
        pyg.typewrite("Hey, ")
        time.sleep(1 + dec1)
        pyg.hotkey("ctrl", "v")
        time.sleep(0.6 + dec2)

        pyg.typewrite(""".  I found your profile online and thought you'd be a good fit for what we do.

Just wondering if you've got time to jump on a call with us in the next few days? It's regarding a high ticket closer opportunity. Let me know 🙂.""")

        time.sleep(0.8 + dec1)

        pyg.press("enter")

        time.sleep(0.2 + ((dec1+0.5) * dec2))
        
        pyg.press("esc")

main()
