#include <iostream>
#include <windows.h>

int main() {
    while (true) {
        
        const char* text = "FUCK OFF "; //TEXT
        for (int i = 0; text[i] != '\0'; i++) {
            INPUT input;
            input.type = INPUT_KEYBOARD;
            input.ki.wScan = 0;
            input.ki.time = 0;
            input.ki.dwExtraInfo = 0;
            input.ki.wVk = 0; 
            input.ki.dwFlags = KEYEVENTF_UNICODE; 
            
            input.ki.wScan = text[i]; 
            
          

           
            SendInput(1, &input, sizeof(INPUT));

           
            Sleep(0.01);

           
            input.ki.dwFlags = KEYEVENTF_UNICODE | KEYEVENTF_KEYUP; 
            SendInput(1, &input, sizeof(INPUT));
            

            
            Sleep(10);
        }

       
        INPUT enterInput;
        enterInput.type = INPUT_KEYBOARD;
        enterInput.ki.wScan = 0;
        enterInput.ki.time = 0;
        enterInput.ki.dwExtraInfo = 0;
        enterInput.ki.wVk = VK_RETURN; 
        enterInput.ki.dwFlags = 0; 
        SendInput(1, &enterInput, sizeof(INPUT));

        
        Sleep(10);
    }

   
}
