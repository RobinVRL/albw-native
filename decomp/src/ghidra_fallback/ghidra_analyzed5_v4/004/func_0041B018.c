#include "ghidra_types.h"

extern int func_0040F1C4(int param_1,int param_2,int param_3);
extern int func_0040F2E4(void);
extern short *DAT_0041b0d0;

// USA 0041B018 <- EU 0041AFF8 (Ghidra, non-matching)
// GLOBAL DAT_0041b0d0 short *

undefined4 func_0041B018(int param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x50) != '\0' && param_2 != (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x60) = param_2;
    psVar2 = DAT_0041b0d0;
    *(undefined1 *)(param_1 + 0x78) = param_3;
    *(undefined4 *)(param_1 + 0x7c) = param_4;
    *(undefined1 *)(param_1 + 0x56) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    sVar1 = *psVar2;
    *(short *)(param_1 + 0x1c94) = sVar1;
    *psVar2 = sVar1 + 1;
    param_2[4] = param_1;
    param_2[6] = param_1 + 0x80;
    *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_1 + 0xe8);
    param_2[8] = *(undefined4 *)(param_1 + 0xfc);
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0xe9);
    param_2[10] = *(undefined4 *)(param_1 + 0xec);
    param_2[0xb] = *(undefined4 *)(param_1 + 0xf0);
    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 0x1c94);
    param_2[0xc] = *(undefined4 *)(param_1 + 0xf4);
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0xf8);
    *(undefined1 *)((int)param_2 + 0x35) = *(undefined1 *)(param_1 + 0xf9);
    *(undefined1 *)((int)param_2 + 0x36) = *(undefined1 *)(param_1 + 0xfa);
    *param_2 = param_2[5];
    param_2[0x16] = 0;
    param_2[0x21] = param_2;
    param_2[0x20] = param_2;
    iVar3 = func_0040F2E4();
    func_0040F1C4(iVar3,(int)(param_2 + 0x1a),1);
    return 1;
  }
  return 0;
}

