#include "ghidra_types.h"

extern int func_003D2BB0(int param_1);
extern int func_003DC2E4(void);
extern int func_003DC828(int param_1);
extern int func_003DCC44(char *param_1);
extern int func_003DDB48(void);
extern int func_003DF8EC(int *param_1,int param_2);
extern char *DAT_003e0188;
extern undefined4 DAT_003e018c;
extern undefined4 DAT_003e0190;
extern int DAT_003e0194;
extern char *DAT_003e0198;
extern int DAT_003e019c;
extern int *DAT_003e01a0;

// USA 003E0144 <- EU 003E0124 (Ghidra, non-matching)
// GLOBAL DAT_003e0188 char *
// GLOBAL DAT_003e018c undefined4
// GLOBAL DAT_003e0190 undefined4
// GLOBAL DAT_003e0194 int
// GLOBAL DAT_003e0198 char *
// GLOBAL DAT_003e019c int
// GLOBAL DAT_003e01a0 int *

undefined1 func_003E0144(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_003e0188;
  if (*DAT_003e0188 != '\0') {
    *DAT_003e0188 = '\0';
    func_003D2BB0(DAT_003e0194);
    func_003DC2E4();
    func_003DDB48();
    func_003DCC44(DAT_003e0198);
    func_003DC828(DAT_003e019c);
    if (pcVar1[3] == '\0') {
      func_003DF8EC(DAT_003e01a0,0);
    }
  }
  return 0;
}

