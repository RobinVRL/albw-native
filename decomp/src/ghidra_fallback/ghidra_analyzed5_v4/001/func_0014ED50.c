#include "ghidra_types.h"

extern int func_002AF830(void);
extern int func_002AF840(void);
extern int func_004D00E4(int param_1,int param_2,int param_3,uint *param_4);

// USA 0014ED50 <- EU 0014ED50 (Ghidra, non-matching)

void func_0014ED50(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  ushort *puVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined1 *)(albw_frame + 0x8))
  #define uStack_17 (*(undefined1 *)(albw_frame + 0x9))
  #define uStack_16 (*(undefined1 *)(albw_frame + 0xa))
  #define uStack_15 (*(undefined1 *)(albw_frame + 0xb))
  #define uStack_14 (*(undefined1 *)(albw_frame + 0xc))
  #define uStack_13 (*(undefined1 *)(albw_frame + 0xd))
  #define uStack_12 (*(undefined1 *)(albw_frame + 0xe))
  #define uStack_11 (*(undefined1 *)(albw_frame + 0xf))
  iVar1 = *(int *)(param_1 + 0x40c);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined1 *)func_002AF840();
  puVar3 = (undefined1 *)func_002AF830();
  uStack_18 = puVar2[3];
  uStack_17 = puVar2[2];
  uStack_16 = puVar2[1];
  uStack_15 = *puVar2;
  uStack_14 = puVar3[3];
  uStack_13 = puVar3[2];
  uStack_12 = puVar3[1];
  uStack_11 = *puVar3;
  iVar4 = 0;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x90000;
  if (0 < *(int *)(*(int *)(iVar1 + 0x20) + 4)) {
    do {
      puVar5 = (ushort *)(**(int **)(iVar1 + 0x20) + iVar4 * 0x154);
      if (puVar5 != (ushort *)0x0) {
        func_004D00E4(iVar1,iVar4,1,(uint *)&uStack_18);
        func_004D00E4(iVar1,iVar4,0,(uint *)&uStack_14);
        *puVar5 = *puVar5 | 0x400;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(*(int *)(iVar1 + 0x20) + 4));
  }
  return;
}

