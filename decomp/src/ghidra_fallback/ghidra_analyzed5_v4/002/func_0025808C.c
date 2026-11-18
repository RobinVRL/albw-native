#include "ghidra_types.h"

extern int func_00258038(int param_1,uint param_2,undefined4 param_3,float fparam_0);
extern int func_00409B8C(int *param_1);
extern void func_00409BC8(int *param_1,int *param_2,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00584B1C(int param_1,uint param_2);
extern int *DAT_002581dc;
extern float DAT_002581e0;
extern float DAT_002581e4;
extern int *DAT_002581e8;
extern undefined4 *DAT_002581ec;
extern int DAT_002581f0;

// USA 0025808C <- EU 002580B4 (Ghidra, non-matching)
// GLOBAL DAT_002581dc int *
// GLOBAL DAT_002581e0 float
// GLOBAL DAT_002581e4 float
// GLOBAL DAT_002581e8 int *
// GLOBAL DAT_002581ec undefined4 *
// GLOBAL DAT_002581f0 int

undefined4 func_0025808C(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  float in_s0;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_20 ((int *)(albw_frame + 0x0))
  piVar1 = DAT_002581e8;
  iVar3 = *DAT_002581dc;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x44) == 0) {
      if ((*(ushort *)(param_1 + 0x60) & 2) != 0) {
        fVar4 = DAT_002581e0;
        fVar5 = DAT_002581e4;
        func_00409BC8(aiStack_20,(int *)(param_1 + 0xc),in_s0);
        func_00258038(param_1,1,0xf,fVar5);
        func_00258038(param_1,2,0xf,fVar4);
        *(undefined2 *)(param_1 + 0x60) = 1;
        *(undefined1 *)(param_1 + 0x6c) = 0;
        return func_00409B8C(aiStack_20);
      }
    }
    else if ((*(ushort *)(param_1 + 0x60) & 1) != 0) {
      fVar4 = DAT_002581e0;
      fVar5 = DAT_002581e4;
      puVar2 = (uint *)func_005841A8(*DAT_002581e8,*DAT_002581ec,
                                     *(int **)(DAT_002581f0 + *DAT_002581e8));
      if ((*(uint **)(*piVar1 + 0x3dbc8) != puVar2) &&
         (iVar3 = func_00584B1C(iVar3,*puVar2), iVar3 != 0)) {
        func_00258038(param_1,1,0xf,fVar4);
        func_00258038(param_1,2,0xf,fVar5);
        *(undefined1 *)(param_1 + 0x6c) = 1;
      }
      *(undefined2 *)(param_1 + 0x60) = 2;
    }
  }
  return 0;
}

