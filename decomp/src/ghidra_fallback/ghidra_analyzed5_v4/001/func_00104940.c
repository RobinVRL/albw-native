#include "ghidra_types.h"

extern int func_00108990(int *param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int *DAT_0010499c;
extern char *DAT_001049a0;
extern int DAT_001049a4;

// USA 00104940 <- EU 00104940 (Ghidra, non-matching)
// GLOBAL DAT_0010499c int *
// GLOBAL DAT_001049a0 char *
// GLOBAL DAT_001049a4 int

undefined4 func_00104940(undefined4 param_1)

{
  char *pcVar1;
  
  func_0010C0C0(DAT_0010499c);
  pcVar1 = DAT_001049a0;
  if (*DAT_001049a0 != '\0') {
    func_00108990(*(int **)(DAT_001049a0 + 0x1c));
    software_interrupt(0x23);
    *(undefined4 *)(pcVar1 + 0x14) = *(undefined4 *)(DAT_001049a4 + 4);
    *pcVar1 = '\0';
    return func_0010C160(DAT_0010499c);
  }
  return func_0010C160(DAT_0010499c);
}

