import pyautogui as pyg
import time
# import random
time.sleep(2)

while True:
    # time.sleep(1+random.random()+random.random())
    # boxPending = pyg.locateOnScreen('pending.png', confidence=0.6)
    # box404 = pyg.locateOnScreen('404.png', confidence=0.6)
    #
    # if (boxPending is not None or box404 is not None):
    #     pyg.hotkey("ctrl", "w")

    boxConnect = pyg.locateOnScreen('connect.jpg', confidence=0.6)

    if (boxConnect is not None):
        connectX, connectY = pyg.center(boxConnect)
        pyg.click(connectX, connectY);
    else:
        boxMore = pyg.locateOnScreen('more.png', confidence=0.6)	
        connectX, connectY = pyg.center(boxMore)
        pyg.click(connectX, connectY);
        boxMoreConnect = pyg.locateOnScreen('more_connect.png', confidence=0.6)
        connectMoreX, connectMoreY = pyg.center(boxMoreConnect)
        pyg.click(connectMoreX, connectMoreY);	
	
    time.sleep(1);
    sendWithoutNote = pyg.locateOnScreen('send.png', confidence=0.8)
    connectX, connectY = pyg.center(sendWithoutNote)
    pyg.click(connectX, connectY);
    time.sleep(1)
    pyg.hotkey('ctrl', 'tab');
    time.sleep(1)
