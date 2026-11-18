#include "ghidra_types.h"

extern int func_00361604(int param_1,undefined1 param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_0066DF38(undefined4 *param_1,undefined1 param_2);
extern ushort *DAT_0046b990;
extern int *DAT_0046b994;
extern int *DAT_0046b998;
extern int *DAT_0046b99c;

// GLOBAL DAT_0046b990 ushort *
// GLOBAL DAT_0046b994 int *
// GLOBAL DAT_0046b998 int *
// GLOBAL DAT_0046b99c int *
// USA 0046B8C0 <- EU 0046B8C0 (Ghidra, function missing from the decomp table)

undefined4 func_0046B8C0(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = DAT_0046b994;
  puVar1 = DAT_0046b990;
  if (*(char *)(param_1 + 0xc6) == '\0') {
    return 0;
  }
  if (((int)*(char *)(*DAT_0046b998 + 0x18) - 9U < 0xd) || ((*(byte *)(param_1 + 0xc4) & 0x20) != 0)
     ) {
    bVar3 = func_00584B94(*DAT_0046b994,(uint)DAT_0046b990[4]);
    if ((!bVar3) || (bVar3 = func_00584B94(*piVar2,(uint)puVar1[5]), bVar3)) {
      return func_0066DF38((undefined4 *)(param_1 + 0x98),6);
    }
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 4;
  }
  else {
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 8;
    bVar3 = func_00584B94(*piVar2,(uint)*puVar1);
    if (bVar3) {
      func_00361604(*DAT_0046b99c,1);
    }
  }
  return func_0066DF38((undefined4 *)(param_1 + 0x98),0xe);
}

