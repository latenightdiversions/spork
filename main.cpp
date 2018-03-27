// this is the main file of execution

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

std::string sendMessage(std::string);
std::string message2Encrypt(std::string);
std::string message2Encrypt(std::string);
std::string encrypt(std::string);

int main() {

    std::string messageSend; // message to be sent
    std::string encryptedMessageSend; // encrypted message to be sent
    std::string messageReceive; // message that is to be received
    std::string encryptedMessageReceive; // message received and then deciphered
    bool newMessage = false; // determines if there is incoming message
    int selection; // selects options in main loop

    do {
        std::cout << "1.) Send Message\n";
        std::cout << "2.) Receive Message\n";
        std::cout << "3.) Quit\n";
        std::cout << "Enter selection: ";
        std::cin >> selection;

        switch (selection) {
        case 1:
            //    std::cout << "Enter Message: ";
            //    std::cin >> messageSend;
            //    std::string encryptedMessageSend = encrypt(messageSend);
            std::cout << "1\n";
            break;

        case 2:
            std::cout << "2\n";
            break;

        case 3:
            std::cout << "3\n";
            break;

        default:
            std::cout << "You are a dumbass.\n";
            break;
        }

    } while (selection != 3);

    return (0);
}

// encrypts message with some sort of cipher
std::string encrypt(std::string message2Encrypt) {

    // some code

    //return(encrypted);
}

// decrypts message
std::string decrypt(std::string message2Decrypt) {

    // some code

    //return(decrypted);
}

// send encrypted message to peer
std::string sendMessage(std::string encryptedMessage) {

    // some code

}

/*
TODO:
- remote killswitch, both clients need to be activated
- store everything in RAM, immediately destroyed upon closing client
- message history for session
- pictures...? open in system with something like feh
- miltary encryption with... something? GPG maybe
- ability to send forkbombs

Interface:

- basic colors for interface

*/
