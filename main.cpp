// this is the main file of execution
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>

std::string sendMessage(std::string);
std::string readFile(std::string);
void decrypt(std::string, std::string);
void encrypt(std::string);
void writeFile();

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


    } while (selection); // TODO: fix

    return (0);
}

// encrypts message with some sort of cipher
void encrypt(std::string message2Encrypt, std::char name) {

  if name == 'd';{
    //write msg to file
    writeFile();
    //code

    command = "cat sendMsg | gpg --encrypt --sign --armour -r cchap.mkb@protonmail.com --output send_caelan_msg";
    system(command);

  }

  if name == 'c';{
    //write msg to file

    //code

    command = "cat sendMsg | gpg --encrypt --sign --armour -r me@danfisc.us --output send_dan_msg";
    system(command);
  }

    // some code
    //return(encrypted);
}

// decrypts message
void decrypt(std::string message2Decrypt, std:string name) {

    if name == d{

      std::string encryptedMessage = readFile(send_dan_msg); // this is you dan
      std::string command = "cat send_dan_msg | gpg -d --output danDecryptedMessage";
      system(command);

    }

    if name == c{

      std::string encryptedMessage = readFile(send_caelan_msg); // this is you dan
      std::string command = "cat send_dan_msg | gpg -d --output caelanDecryptedMessage";
      system(command);

    }

}

// send encrypted message to peer
std::string sendMessage(std::string encryptedMessage) {

    // some code

}

void writeFile(){
  //Recieve message from user
  std::string msg2Write;
  std::cout << "Message to Send: ";
  std::cin >> msg2Write;
  //Create file buffer
  std::ofstream outputFileBuffer;
  outputFileBuffer.open("sendMsg", std::ofstream::out);
  outputFileBuffer << msg2Write;
  outputFileBuffer.close();
}

std::string readFile(std::string fileName){
  std::string fileContents;
  std::ifstream inputFileBuffer;
  inputFileBuffer.open(fileName, std::ifstream::in);
  inputFileBuffer >> fileContents;
  return(fileContents);
}

void sendMessage(std:string message){






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


type message
encrypt message
  writing to file
  system command gpg
send message
  somehow
decrypt message
  systemcommand decrypt to file
  read decrypted file
display message

*/
