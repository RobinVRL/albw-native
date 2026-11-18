#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_003cd720;
extern undefined *DAT_003cd724;
extern undefined *DAT_003cd728;

// USA 003CD588 <- EU 003CD564 (Ghidra, non-matching)
// GLOBAL DAT_003cd720 undefined *
// GLOBAL DAT_003cd724 undefined *
// GLOBAL DAT_003cd728 undefined *

int func_003CD588(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define auStack_2f ((undefined1 *)(albw_frame + 0x1))
  iVar1 = func_00100118(param_1,DAT_003cd720,0x18,6);
  *(undefined1 *)(iVar1 + 0x90) = 0;
  *(undefined1 *)(iVar1 + 0x91) = 0;
  *(undefined1 *)(iVar1 + 0x92) = 0;
  uVar7 = 0;
  *(undefined1 *)(iVar1 + 0x93) = 0;
  do {
    iVar2 = func_00100118((int)auStack_2f,DAT_003cd724,1,3);
    puVar3 = (undefined1 *)func_00100118(iVar2 + 3,DAT_003cd728,1,3);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[-1] = 0;
    puVar3[-2] = 0;
    puVar3[-3] = 0;
    if ((uVar7 & 0xff) == 0) {
      uVar4 = 0xe;
    }
    else {
      uVar4 = 0xf;
    }
    puVar3[2] = uVar4;
    puVar3[1] = uVar4;
    *puVar3 = uVar4;
    puVar3[5] = 0;
    iVar2 = func_00100118((int)(puVar3 + 6),DAT_003cd724,1,3);
    puVar3 = (undefined1 *)func_00100118(iVar2 + 3,DAT_003cd728,1,3);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[-1] = 0;
    puVar3[-2] = 0;
    if ((uVar7 & 0xff) == 0) {
      uVar4 = 0xe;
    }
    else {
      uVar4 = 0xf;
    }
    puVar3[-3] = 0;
    puVar3[2] = uVar4;
    puVar3[1] = uVar4;
    *puVar3 = uVar4;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    switch(uVar7) {
    case 0:
      uVar5 = 0xc0;
      break;
    case 1:
      uVar5 = 200;
      break;
    case 2:
      uVar5 = 0xd0;
      break;
    case 3:
      uVar5 = 0xd8;
      break;
    case 4:
      uVar5 = 0xf0;
      break;
    case 5:
      uVar5 = 0xf8;
      break;
    default:
      goto switchD_003cd680_default;
    }
    *(undefined2 *)(puVar3 + 9) = uVar5;
switchD_003cd680_default:
    puVar6 = (undefined4 *)(iVar1 + uVar7 * 0x18);
    uVar7 = uVar7 + 1;
    *puVar6 = *(undefined4 *)(puVar3 + -0xd);
    puVar6[1] = *(undefined4 *)(puVar3 + -9);
    puVar6[2] = *(undefined4 *)(puVar3 + -5);
    puVar6[3] = *(undefined4 *)(puVar3 + -1);
    puVar6[4] = *(undefined4 *)(puVar3 + 3);
    puVar6[5] = *(undefined4 *)(puVar3 + 7);
    if (5 < uVar7) {
      return iVar1;
    }
  } while( true );
}

