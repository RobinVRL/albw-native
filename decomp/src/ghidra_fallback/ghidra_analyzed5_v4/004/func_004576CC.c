#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0023194C(int param_1,undefined4 param_2);
extern int func_002DFB78(int param_1);
extern int func_00450178(int param_1,int param_2);
extern int func_00459280(int param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern float DAT_004578e8;
extern int *DAT_004578ec;
extern int DAT_004578f0;
extern int *DAT_004578f4;
extern char s_SE_S_SELECT_004578f8[];

// USA 004576CC <- EU 004576A4 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_004578e8 float
// GLOBAL DAT_004578ec int *
// GLOBAL DAT_004578f0 int
// GLOBAL DAT_004578f4 int *
// GLOBAL s_SE_S_SELECT_004578f8 string

undefined4 func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  if (*(char *)(param_1 + 0x180) != '\0') {
    if (*(uint *)(param_1 + 0x210) != param_2) {
      func_00459280(param_1);
    }
    iVar2 = DAT_004578f0;
    piVar1 = DAT_004578ec;
    switch(param_2) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      piVar6 = (int *)(param_1 + 0x1c4) + param_2;
      piVar3 = (int *)(param_1 + 0x1c4);
      if (param_2 < 6) {
        piVar3 = piVar6;
      }
      iVar5 = *piVar3;
      fVar7 = DAT_004578e8;
      iVar4 = func_005229AC(*(int **)(iVar5 + 0x1c),DAT_004578f4);
      func_00450178(*piVar1,iVar4);
      *(undefined4 *)(iVar5 + 0xa4) = *(undefined4 *)(iVar5 + 0x1c);
      *(undefined2 *)(iVar5 + 0x9e) = 5;
      *(undefined2 *)(iVar5 + 0x9c) = 0;
      func_002317C0((undefined2 *)(iVar5 + 0x9c),fVar7);
      func_002317C0((undefined2 *)(iVar5 + 0x90),fVar7);
      func_0023194C(iVar5 + 0x90,0);
      if (param_3 != 0) {
        local_2c = s_SE_S_SELECT_004578f8;
        if (5 < param_2) {
          piVar6 = (int *)(param_1 + 0x1c4);
        }
        local_30 = iVar2;
        func_00533078(*piVar6,&local_30,0);
      }
      break;
    case 6:
      iVar5 = *(int *)(param_1 + 0x1dc);
      fVar7 = DAT_004578e8;
      iVar4 = func_005229AC(*(int **)(iVar5 + 0x1c),DAT_004578f4);
      func_00450178(*piVar1,iVar4);
      *(undefined4 *)(iVar5 + 0xa4) = *(undefined4 *)(iVar5 + 0x1c);
      *(undefined2 *)(iVar5 + 0x9e) = 5;
      *(undefined2 *)(iVar5 + 0x9c) = 0;
      func_002317C0((undefined2 *)(iVar5 + 0x9c),fVar7);
      func_002317C0((undefined2 *)(iVar5 + 0x90),fVar7);
      func_0023194C(iVar5 + 0x90,0);
      if (param_3 != 0) {
        local_2c = s_SE_S_SELECT_004578f8;
        local_30 = iVar2;
        func_00533078(*(undefined4 *)(param_1 + 0x1dc),&local_30,0);
      }
      break;
    case 7:
      iVar5 = *(int *)(param_1 + 0x1e0);
      fVar7 = DAT_004578e8;
      iVar4 = func_005229AC(*(int **)(iVar5 + 0x1c),DAT_004578f4);
      func_00450178(*piVar1,iVar4);
      *(undefined4 *)(iVar5 + 0xa4) = *(undefined4 *)(iVar5 + 0x1c);
      *(undefined2 *)(iVar5 + 0x9e) = 5;
      *(undefined2 *)(iVar5 + 0x9c) = 0;
      func_002317C0((undefined2 *)(iVar5 + 0x9c),fVar7);
      func_002317C0((undefined2 *)(iVar5 + 0x90),fVar7);
      func_0023194C(iVar5 + 0x90,0);
      if (param_3 != 0) {
        local_2c = s_SE_S_SELECT_004578f8;
        local_30 = iVar2;
        func_00533078(*(undefined4 *)(param_1 + 0x1e0),&local_30,0);
      }
    }
    *(uint *)(param_1 + 0x210) = param_2;
    return func_002DFB78(*piVar1);
  }
  return 0;
}

