struct message {
  string contents<>;
};

program PROGRAM_NAME{
 version ALPHA {
   void myWrite (message) = 1;
   message getChar (void) = 2;
 } = 1;
} = 0x20000001;