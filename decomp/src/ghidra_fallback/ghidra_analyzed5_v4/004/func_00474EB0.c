#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_00450178(int param_1,int param_2);
extern int func_0045E4AC(int param_1,uint param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern int *DAT_00474f8c;
extern int *DAT_00474f90;
extern int DAT_00474fa0;
extern char s_SE_S_SELECT_00474f94[];

// USA 00474EB0 <- EU 00474E88 (Ghidra, non-matching)
// GLOBAL DAT_00474f8c int *
// GLOBAL DAT_00474f90 int *
// GLOBAL DAT_00474fa0 int
// GLOBAL s_SE_S_SELECT_00474f94 string

undefined4 func_00474EB0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) != 0) {
      return func_0066E58C((undefined4 *)(param_1 + 200),'\x02');
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xee) = 2;
    *(undefined2 *)(param_1 + 0xec) = 0;
    func_00231524(param_1 + 0xec);
    iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_00474f8c);
    piVar2 = DAT_00474f90;
    func_00450178(*DAT_00474f90,iVar3);
    if (*(char *)(param_1 + 0xcc) == '\0') {
      func_0045E4AC(*piVar2,(uint)*(byte *)(param_1 + 0xf8));
    }
    if (((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 8) != 0) &&
       (*(int *)(*(int *)(param_1 + 0x14) + 8) == 0)) {
      local_14 = s_SE_S_SELECT_00474f94;
      local_18 = DAT_00474fa0;
      func_00533078(param_1,&local_18,0);
    }
  }
  if ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 0x20) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xee) = 2;
  *(undefined2 *)(param_1 + 0xec) = 0;
  return func_002313DC(param_1 + 0xec);
}

