#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00584B94(int param_1,int param_2);
extern int DAT_004460a0;
extern int *DAT_004460a4;
extern int DAT_004460b8;
extern char s_L_MapSwitch_00_004460a8[];

// USA 00445FC4 <- EU 00445F9C (Ghidra, non-matching)
// GLOBAL DAT_004460a0 int
// GLOBAL DAT_004460a4 int *
// GLOBAL DAT_004460b8 int
// GLOBAL s_L_MapSwitch_00_004460a8 string

undefined4 func_00445FC4(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  bVar2 = func_00584B94(*DAT_004460a4,DAT_004460a0);
  if ((bVar2) && (*(char *)(param_1 + 0x15c) == '\0' || *(char *)(param_1 + 0x15c) == '\x02')) {
    local_14 = s_L_MapSwitch_00_004460a8;
    local_18 = DAT_004460b8;
    iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_18);
    if ((*(byte *)(iVar3 + 0x44) & 1) == 0) {
      func_00167E04(*(int *)(param_1 + 0x1c),iVar3,1);
      iVar3 = *(int *)(param_1 + 0x214);
      cVar1 = *(char *)(iVar3 + 0xd);
      bVar2 = cVar1 == '\0';
      if (bVar2) {
        cVar1 = *(char *)(iVar3 + 0xe);
      }
      if (bVar2 && cVar1 == '\0') {
        *(undefined1 *)(iVar3 + 0xe) = 1;
      }
    }
  }
  piVar5 = (int *)(*(int *)(param_1 + 0x174) + *(char *)(param_1 + 0x15c) * 8);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x174) + *(char *)(param_1 + 0x15c) * 8 + 4);
  if ((uVar4 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *(int *)(*(int *)(param_1 + 0x16c) + ((int)uVar4 >> 1)));
  }
  (*(code *)*piVar5)();
  iVar3 = *(int *)(param_1 + 0x158) + 1;
  *(int *)(param_1 + 0x158) = iVar3;
  if (*(int *)(param_1 + 0x168) == 0) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  return func_00352210(*(int *)(param_1 + 0x168),1,fparam_0);
}

