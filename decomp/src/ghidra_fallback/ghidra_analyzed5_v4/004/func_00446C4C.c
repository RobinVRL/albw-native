#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int DAT_00446cc4;
extern undefined DAT_00446cc8;
extern char s_N_BtnKinsta_00_00446cb4[];
extern char s__SE_S_MAP_KINSTA_APPEAR_00446ccb[];
extern undefined4 _DAT_00446cc8;

// USA 00446C4C <- EU 00446C24 (Ghidra, non-matching)
// GLOBAL DAT_00446cc4 int
// GLOBAL DAT_00446cc8 undefined
// GLOBAL s_N_BtnKinsta_00_00446cb4 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00446C4C(int param_1)

{
  char cVar1;
  int iVar2;
  float fparam_0;
  int iVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar2 = DAT_00446cc4;
  local_1c = s_N_BtnKinsta_00_00446cb4;
  local_20 = DAT_00446cc4;
  iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_20);
  if ((*(byte *)(iVar3 + 0x44) & 1) == 0) {
    func_00167E04(*(int *)(param_1 + 0x1c),iVar3,1);
    fparam_0 = ALBW_AS_F32(_DAT_00446cc8);
    iVar3 = *(int *)(param_1 + 0x210);
    cVar1 = *(char *)(iVar3 + 0xd);
    bVar4 = cVar1 == '\0';
    if (bVar4) {
      cVar1 = *(char *)(iVar3 + 0xe);
    }
    if (bVar4 && cVar1 == '\0') {
      *(undefined1 *)(iVar3 + 0xe) = 1;
    }
    func_002317C0((undefined2 *)(param_1 + 0x110),fparam_0);
    local_14 = s__SE_S_MAP_KINSTA_APPEAR_00446ccb + 1;
    local_18 = iVar2;
    func_00533078(*(undefined4 *)(param_1 + 0x210),&local_18,0);
  }
  return;
}

