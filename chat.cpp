#include <iostream>
#include <string>
#include <cctype> // Required for tolower()

using namespace std;

void chatbot() {
    string userInput;
    cout << "Chatbot: Hello! I am your chatbot. Type 'exit' to end the chat.\n";

    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        // Convert input to lowercase for better matching
        for (size_t i = 0; i < userInput.length(); i++) {
            userInput[i] = tolower(static_cast<unsigned char>(userInput[i])); // Ensure proper type conversion
        }

        // Responses based on input
        if (userInput == "hi" || userInput == "hello") {
            cout << "Chatbot: Hi there! How can I assist you?\n";
        } else if (userInput == "how are you?") {
            cout << "Chatbot: I'm just a bot, but I'm doing great! What about you?\n";
        } else if (userInput == "what is your name?") {
            cout << "Chatbot: I am a simple chatbot built using C++!\n";
        } else if (userInput == "exit") {
            cout << "Chatbot: Goodbye! Have a great day!\n";
            break;
        } else {
            cout << "Chatbot: Sorry, I didn't understand that. Can you try something else?\n";
        }
    }
}

int main() {
    chatbot();
    return 0;
}


