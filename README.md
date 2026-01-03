# Login System in C

## Description

This is a simple login system written in C. It allows two users:

* **Admin** with username `admin` and password `admin`
* **User** with username `user` and password `user`

The program prompts the user to choose a username, then asks for the password. It validates the credentials and displays colored messages:

* **Blue** for prompts
* **Green** for successful login
* **Red** for errors (incorrect username or password)

## Features

* Uses `struct` to store user information
* Handles string input safely with `fgets` and `strcspn`
* Colored terminal output using ANSI escape codes

## Usage

1. Compile the program:

```bash
gcc login_system.c -o login_system
```

2. Run the program:

```bash
./login_system
```

3. Follow the prompts to log in as `admin` or `user`.

## Notes

* Works on terminals that support ANSI escape codes (Linux, macOS, Windows 10+)
* Currently supports only two users
* Can be expanded to include more users
