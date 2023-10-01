# Minitalk
[![Platform](https://img.shields.io/badge/platform-Linux-blue.svg)](https://img.shields.io/badge/platform-Linux-blue.svg)

## Overview

**Minitalk**, developed as part of the curriculum at 42 School, is a C implementation of a small data exchange program. It allows communication between a `client` and a `server` using UNIX signals. The `client` sends a string to the `server`, which then prints the received string. The purpose of this project is to demonstrate the usage of UNIX signals for inter-process communication.

## Features

- Sending messages from the `client` to the `server`.
- Displaying received messages on the `server`.
- Handling signal-based communication using **SIGUSR1** and **SIGUSR2**.

### Bonus Features

The **minitalk** project also includes a bonus feature:

- The `server` ensures successful message reception by sending a signal to the `client` to acknowledge every received message.

## Getting Started

### Build

To utilize **minitalk** follow these steps:

1. Clone the repository: `git clone https://github.com/ruippeixe/minitalk.git`.
2. Navigate to the **minitalk** directory.
3. Compile it with one of the following commands: `make` or `make bonus`.

## Usage

### Server

1. Open a terminal.
2. Navigate to the directory where the `server` executable is located.
3. Run the following command:
```shell
./server
```
or
```shell
./server_bonus
```
The `server` will start running and display its process **ID** (PID). It will also begin listening for incoming messages.

### Client

To send a message from the `client` to the `server`, follow these steps:

1. Open a new terminal.
2. Navigate to the directory where the `client` executable is located.
3. Run the following command:
```shell
./client <PID> "<message>"
```
or
```shell
./client_bonus <PID> "<message>"
```

Substitute **\<PID>** with the `server's` process ID, which can be obtained from the `server's` output. Replace **\<message>** with the intended message, ensuring it is enclosed within double quotes.

4. Press **Enter** to send the message. The `client` will send the message character by character to the `server`.
 
**Note:** Before executing the `client` command, ensure that the `server` is running. Additionally, make sure to use the appropriate `client` command based on the **version** of the `server` you have chosen to run.

## Contact
For any inquiries or feedback regarding this project, please contact [rpp@ruippeixe.com](mailto:rpp@ruippeixe.com).

Thank you for your interest!
