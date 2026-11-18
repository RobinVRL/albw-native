#include "ghidra_types.h"

extern int func_0014A354(int param_1,int param_2);
extern int func_0019AA9C(int param_1,int param_2,int param_3);
extern int func_0049D884(int param_1,byte *param_2);
extern int func_0049E254(int param_1,char *param_2);
extern int func_0049F79C(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);
extern int func_004A1688(char *param_1,char *param_2);
extern int func_004EB6BC(int param_1);
extern uint *DAT_0014abcc;
extern undefined4 DAT_0014abd0;
extern undefined4 DAT_0014abd4;
extern undefined4 DAT_0014abd8;
extern undefined4 DAT_0014abdc;
extern int *DAT_0014abe0;
extern int *DAT_0014abe4;
extern int *DAT_0014abe8;

// USA 0014AA1C <- EU 0014AA1C (Ghidra, non-matching)
// GLOBAL DAT_0014abcc uint *
// GLOBAL DAT_0014abd0 undefined4
// GLOBAL DAT_0014abd4 undefined4
// GLOBAL DAT_0014abd8 undefined4
// GLOBAL DAT_0014abdc undefined4
// GLOBAL DAT_0014abe0 int *
// GLOBAL DAT_0014abe4 int *
// GLOBAL DAT_0014abe8 int *

undefined4 func_0014AA1C(int param_1,char *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 ((byte *)(albw_frame + 0x8))
  #define local_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_44 (*(int *)(albw_frame + 0x6c))
  #define local_38 (*(int *)(albw_frame + 0x78))
  #define local_28 ((char *)(albw_frame + 0x88))
  #define local_24 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_20 ((char *)(albw_frame + 0x90))
  #define local_1c (*(undefined4 *)(albw_frame + 0x94))
  uVar1 = *DAT_0014abcc;
  if (uVar1 != 0) {
    bVar4 = *(char *)(uVar1 + 0x61) != '\0';
    if (!bVar4) {
      uVar1 = (uint)*(byte *)(uVar1 + 0x60);
    }
    if (bVar4 || uVar1 != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  local_28[0] = '\x02';
  local_24 = DAT_0014abd0;
  iVar2 = func_0049E254(*(int *)(param_1 + 0x18),local_28);
  if (iVar2 == 0) {
    local_a8[0] = 2;
    local_a4 = DAT_0014abd4;
    iVar2 = func_004A1688(param_2,(char *)local_a8);
    if (iVar2 != 0) {
      param_3 = 0xe;
    }
  }
  local_28[0] = '\x02';
  local_24 = DAT_0014abd8;
  iVar2 = func_004A1688(param_2,local_28);
  if (iVar2 == 0) {
    local_20[0] = '\x02';
    local_1c = DAT_0014abdc;
    iVar2 = func_004A1688(param_2,local_20);
    if (iVar2 == 0) goto LAB_0014aaf4;
  }
  param_3 = 5;
LAB_0014aaf4:
  iVar2 = func_0014A354(*DAT_0014abe0,param_3);
  if (iVar2 != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x10c) = 0;
    if (*(char *)(param_1 + 0x22) != '\0') {
      piVar3 = *(int **)(param_1 + 0x28);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x18))(piVar3,0);
      }
      func_0019AA9C(*DAT_0014abe4,2,1);
      *(undefined1 *)(param_1 + 0x23) = 1;
      *(undefined1 *)(param_1 + 0x22) = 0;
    }
    func_0049F79C((undefined4 *)local_a8,*(undefined4 *)(param_1 + 0x28),(undefined4 *)param_2,iVar2
                 );
    local_38 = param_1 + 0x10b0;
    local_44 = iVar2;
    iVar2 = func_0049D884(*(int *)(param_1 + 0x18),local_a8);
    piVar3 = DAT_0014abe8;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      func_004EB6BC(*piVar3);
      return 1;
    }
  }
  return 0;
}

