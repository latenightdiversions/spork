// this is the main file of execution
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>

std::string sendMessage(std::string);
std::string message2Encrypt(std::string);
std::string message2Encrypt(std::string);
std::string encrypt(std::string);

int main() {

    std::string messageSend;             // message to be sent
    std::string encryptedMessageSend;    // encrypted message to be sent
    std::string messageReceive;          // message that is to be received
    std::string encryptedMessageReceive; // message received and then deciphered
    bool newMessage = false;             // determines if there is incoming message
    int selection;                       // selects options in main loop

    char name;
    std::cout << "who are you? c/d";
    std::cin >> name;

    do {

        std::cout << "1.) Send Message: ";
        std::cin >> messageSend;
        std::string encryptedMessageSend = encrypt(messageSend, name);
        std::cout << encryptedMessageSend << '\n';


    } while (selection != 3);

    return (0);
}

// encrypts message with some sort of cipher
std::string encrypt(std::string message2Encrypt, std::char name) {

  if name == 'd';{
    //write msg to file

    //code

    command = "cat sendMsg | gpg --encrypt --sign --armour -r cchap.mkb@protonmail.com --output send_caelan_msg";
    system(command);
    return(send_caelan_msg)
  }

  if name == 'c';{
    //write msg to file

    //code

    command = "cat sendMsg | gpg --encrypt --sign --armour -r me@danfisc.us --output send_dan_msg";
    system(command);
    return(send_dan_msg)
  }

    // some code
    return("fuck");
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
http://www.cplusplus.com/reference/thread/thread/
*/
