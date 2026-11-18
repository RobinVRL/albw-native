#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00164B08(int param_1,int param_2);
extern int func_00164FFC(int param_1,float fparam_0);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_00520FC0(void);
extern int func_00658748(undefined4 *param_1,undefined1 param_2);
extern int DAT_00165794;
extern float DAT_00165798;
extern float DAT_0016579c;
extern float DAT_001657a0;
extern float DAT_001657a4;
extern int *DAT_001657a8;
extern uint DAT_001657ac;
extern uint DAT_001657b0;
extern undefined4 DAT_001657b4;
extern int *DAT_001657b8;
extern char s_SE_Tendol_FLY_00165784[];

// USA 00165614 <- EU 00165618 (Ghidra, non-matching)
// GLOBAL DAT_00165794 int
// GLOBAL DAT_00165798 float
// GLOBAL DAT_0016579c float
// GLOBAL DAT_001657a0 float
// GLOBAL DAT_001657a4 float
// GLOBAL DAT_001657a8 int *
// GLOBAL DAT_001657ac uint
// GLOBAL DAT_001657b0 uint
// GLOBAL DAT_001657b4 undefined4
// GLOBAL DAT_001657b8 int *
// GLOBAL s_SE_Tendol_FLY_00165784 string

void func_00165614(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint unaff_r5;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((int *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined1 *)(albw_frame + 0x28))
  #define local_37 (*(undefined1 *)(albw_frame + 0x29))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  #define local_18 (*(int *)(albw_frame + 0x48))
  #define local_14 (*(char * *)(albw_frame + 0x4c))
  local_18 = DAT_00165794;
  local_14 = s_SE_Tendol_FLY_00165784;
  func_001507D8(param_1,&local_18,0);
  func_00164B08(param_1,0);
  iVar1 = func_00520FC0();
  fVar3 = DAT_0016579c + *(float *)(iVar1 + 4) * DAT_00165798;
  if (DAT_001657a0 < fVar3) {
    fVar3 = DAT_001657a0;
  }
  *(float *)(param_1 + 0x8e4) = fVar3;
  func_00164FFC(param_1,DAT_001657a4);
  if (*(uint *)(param_1 + 0x904) < *(uint *)(param_1 + 0x908)) {
    *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x904) + 1;
  }
  else if (*(uint *)(*DAT_001657a8 + 0x10) +
           (uint)((ulonglong)*(uint *)(*DAT_001657a8 + 0x10) * (ulonglong)DAT_001657ac >> 0x21) * -3
           == 0) {
    local_34 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_30 = *(undefined4 *)(param_1 + 0x3d4);
    uStack_2c = *(undefined4 *)(param_1 + 0x3d8);
    puVar2 = (undefined4 *)func_00520FC0();
    local_28 = *puVar2;
    uStack_24 = puVar2[1];
    local_20 = puVar2[2];
    local_60[1] = 0;
    local_60[4] = DAT_001657b0 | unaff_r5 & 0xffff0000;
    local_60[0] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_48 = 0;
    local_3c = DAT_001657b4;
    local_40 = &local_34;
    local_44 = &local_28;
    local_38 = 0;
    local_37 = 1;
    local_4c = 0x78;
    iVar1 = func_004A8030(*DAT_001657b8,local_60,0x33);
    if (iVar1 == 0) {
      func_00658748((undefined4 *)(param_1 + 0x8bc),3);
    }
  }
  return;
}

