#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int iRam0016fa78;
extern undefined4 *puRam0016fa74;
extern char s_Break_0016fa7c[];
extern char s_SE_TileIce_BREAK_0016fa84[];
extern char s_SE_TileIce_MELT_0016faa0[];

// USA 0016F954 <- EU 0016F954 (Ghidra, non-matching)
// GLOBAL UNK_0016fa74 undefined4 *
// GLOBAL UNK_0016fa78 int
// GLOBAL s_Break_0016fa7c string
// GLOBAL s_SE_TileIce_BREAK_0016fa84 string
// GLOBAL s_SE_TileIce_MELT_0016faa0 string

undefined4 func_0016F954(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_20 (*(int *)(albw_frame + 0x0))
  #define pcStack_1c (*(char * *)(albw_frame + 0x4))
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  *(undefined1 *)(param_2 + 0x38) = 0;
  *(undefined1 *)(param_2 + 0x34) = 2;
  *(undefined1 *)(param_2 + 0x35) = 0xb4;
  func_004CF478(*(int *)(param_2 + 0x20),0);
  func_004A8304(*puRam0016fa74,*(int *)(param_2 + 0x24));
  iVar1 = iRam0016fa78;
  uVar2 = (uint)*(byte *)(param_2 + 0x36);
  if (param_3 == 0) {
    if (uVar2 < (uint)param_1[0x184]) {
      iVar3 = *(int *)(param_1[0x186] + uVar2 * 4);
    }
    else {
      iVar3 = 0;
    }
    if (*(int *)(iVar3 + 0x24) != 0) {
      func_004A1B9C(aiStack_18,*(int *)(iVar3 + 0x24),(uint *)0x16fa98);
    }
    pcStack_1c = s_SE_TileIce_MELT_0016faa0;
    uVar2 = (uint)*(byte *)(param_2 + 0x36);
    if (uVar2 < (uint)param_1[0x11e]) goto LAB_0016fa60;
  }
  else {
    if (uVar2 < (uint)param_1[0x184]) {
      iVar3 = *(int *)(param_1[0x186] + uVar2 * 4);
    }
    else {
      iVar3 = 0;
    }
    if (*(int *)(iVar3 + 0x24) != 0) {
      func_004A1B9C(aiStack_18,*(int *)(iVar3 + 0x24),(uint *)s_Break_0016fa7c);
    }
    pcStack_1c = s_SE_TileIce_BREAK_0016fa84;
    uVar2 = (uint)*(byte *)(param_2 + 0x36);
    if (uVar2 < (uint)param_1[0x11e]) {
LAB_0016fa60:
      iVar3 = *(int *)(param_1[0x120] + uVar2 * 4);
      goto LAB_0016fa00;
    }
  }
  iVar3 = 0;
LAB_0016fa00:
  iStack_20 = iVar1;
  return func_0014DBF4(param_1,&iStack_20,iVar3 + 4,0);
}

