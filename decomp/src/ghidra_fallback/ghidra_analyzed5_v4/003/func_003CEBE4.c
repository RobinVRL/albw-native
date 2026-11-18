#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003D5710(uint param_1);
extern int DAT_003cec3c;
extern int DAT_003cec40;
extern int *DAT_003cec44;
extern uint DAT_003cec48;

// USA 003CEBE4 <- EU 003CEBC0 (Ghidra, non-matching)
// GLOBAL DAT_003cec3c int
// GLOBAL DAT_003cec40 int
// GLOBAL DAT_003cec44 int *
// GLOBAL DAT_003cec48 uint

int func_003CEBE4(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_003cec44;
  iVar1 = DAT_003cec3c;
  iVar3 = DAT_003cec40;
  if ((*(char *)(DAT_003cec3c + 1) != '\0') && (iVar3 = 0, *(char *)(DAT_003cec3c + 2) == '\0')) {
    func_0010C0C0(DAT_003cec44);
    iVar3 = func_003D5710(0);
    if (iVar3 < 0) {
      func_0010C160(piVar2);
      return iVar3;
    }
    func_00104338(DAT_003cec48,0);
    *(undefined1 *)(iVar1 + 2) = 1;
    func_0010C160(piVar2);
  }
  return iVar3;
}

