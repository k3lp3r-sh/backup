import pyautogui as pyg
import time 
import random


while True:
    time.sleep(0.732 + random.random())
	# pyg.click(157,375)
    pyg.click(158, 375)
    time.sleep(2 + random.random())
    pyg.doubleClick(238,252)
    pyg.hotkey("ctrl", "c")
    pyg.press("esc")
    boxConnect = pyg.locateOnScreen('connect.jpg', confidence=0.6)
    boxMore = pyg.locateOnScreen('more.png', confidence=0.6)
    boxWhConnect = pyg.locateOnScreen('connect_white.png')
    if (boxConnect is not None):
        connectX, connectY = pyg.center(boxConnect)
        pyg.click(connectX, connectY);
    elif (boxWhConnect is not None):
        connectX, connectY = pyg.center(boxWhConnect);
        pyg.click(connectX, connectY)
    else:
        boxMore = pyg.locateOnScreen('more.png', confidence=0.6)	
        connectX, connectY = pyg.center(boxMore)
        pyg.click(connectX, connectY);
        boxMoreConnect = pyg.locateOnScreen('more_connect.png', confidence=0.6)
        connectMoreX, connectMoreY = pyg.center(boxMoreConnect)
        pyg.click(connectMoreX, connectMoreY);
    boxAdd = pyg.locateOnScreen("add_a_note.png", confidence=0.6)
    connectX, connectY = pyg.center(boxAdd)
    pyg.click(connectX, connectY);

    # pyg.doubleClick(296,186)
    # pyg.hotkey("ctrl", "c")
    # time.sleep(1)
    # pyg.click(244,331)
    pyg.typewrite("Hey, ")
    time.sleep(1 + random.random())
    pyg.hotkey("ctrl", "v")
    pyg.sleep(1 + random.random())
    pyg.typewrite(". I went over your company and it could be a good fit for the ERC grant (Employee Retention Credit) which is 100% non-refundable up to 26k per employee with ZERO upfront costs and no restrictions on how you spend it.")
    pyg.sleep(1 + random.random())	
	# boxSend = pyg.locateOnScreen("send.png", confidence=0.6)
	# connectX, connectY = pyg.center(boxSend)
	# pyg.click(connectX, connectY);
    pyg.click(698,605)	
    pyg.hotkey("ctrl", "tab")
	
	
