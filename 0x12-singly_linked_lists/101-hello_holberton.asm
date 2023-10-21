global _start
section .text
_start:
  ; Set the rax register to the system call number for `printf()`.
  mov rax, 1
  ; Set the rdi register to the address of the format string.
  mov rdi, msg
  ; Call the `printf()` system call.
  syscall

  ; Set the rax register to the system call number for `exit()`.
  mov rax, 60
  ; Exit the program with a status code of 0.
  mov rdi, 0
  syscall

section .rodata
msg: db "Hello, Holberton!\n", 0