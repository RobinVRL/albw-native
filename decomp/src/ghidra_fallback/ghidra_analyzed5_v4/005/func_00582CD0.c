#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0016C42C(int param_1,int param_2,undefined4 *param_3);
extern int func_0016C524(int param_1,uint param_2,undefined4 *param_3);
extern void func_004D7E0C(float *param_1,uint param_2,uint param_3);
extern int *DAT_00582d6c;
extern float DAT_00582d70;
extern float DAT_00582d74;
extern undefined4 DAT_00582d78;

// USA 00582CD0 <- EU 00582CA8 (Ghidra, non-matching)
// GLOBAL DAT_00582d6c int *
// GLOBAL DAT_00582d70 float
// GLOBAL DAT_00582d74 float
// GLOBAL DAT_00582d78 undefined4

undefined4 func_00582CD0(undefined4 param_1,uint param_2,float fparam_0,float fparam_1)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define afStack_3c ((float *)(albw_frame + 0x14))
  piVar1 = DAT_00582d6c;
  if (*DAT_00582d6c != 0) {
    fVar2 = DAT_00582d70;
    uVar3 = func_00114608((uint)ALBW_AS_U32((fparam_0 * DAT_00582d70)),param_2);
    uVar4 = func_00114608((uint)ALBW_AS_U32((fparam_1 * fVar2)),(uint)((ulonglong)uVar3 >> 0x20));
    func_004D7E0C(afStack_3c,(uint)uVar3,(uint)uVar4);
    local_48 = DAT_00582d74;
    local_44 = DAT_00582d74;
    uStack_40 = DAT_00582d78;
    func_00115CE4(&local_48,afStack_3c,&local_48);
    func_00115DC8(&local_48);
    if (2 < (int)param_2) {
      return func_0016C42C(*piVar1,param_2 - 3 & 0xffff,&local_48);
    }
    func_0016C524(*piVar1,param_2 & 0xffff,&local_48);
  }
  return 0;
}

