#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern float func_0056F410(int param_1);
extern float func_0059090C(float fparam_0);
extern float func_0067FB14(byte *param_1,uint param_2,int param_3);
extern int func_0067FFC8(byte *param_1,float *param_2,uint param_3,int param_4);
extern float DAT_0067fae0;
extern uint DAT_0067fae4;
extern float DAT_0067fae8;

// USA 0067F944 <- EU 0067F91C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_0067fae0 float
// GLOBAL DAT_0067fae4 uint
// GLOBAL DAT_0067fae8 float

float func_0067F944(byte *param_1,float *param_2,float *param_3,uint param_4,uint param_5,
                   float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define abStack_88 ((byte *)(albw_frame + 0x8))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define local_3c (*(float *)(albw_frame + 0x54))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define local_34 (*(float *)(albw_frame + 0x5c))
  fVar3 = DAT_0067fae0;
  fVar4 = DAT_0067fae0;
  if ((DAT_0067fae4 & *(uint *)(param_1 + 0x40)) != 0x300 &&
      (DAT_0067fae4 & *(uint *)(param_1 + 0x40)) != 0) {
    local_40 = DAT_0067fae0;
    local_3c = DAT_0067fae0;
    local_38 = DAT_0067fae0;
    local_34 = DAT_0067fae0;
    func_00110D44((undefined4 *)abStack_88,param_1,0x48);
    func_0067FFC8(abStack_88,&local_40,param_4,param_5);
    fVar3 = local_40 + local_38;
    fVar4 = local_3c + local_34;
  }
  fVar2 = DAT_0067fae8;
  if ((*(uint *)(param_1 + 0x40) & 0x30) == 0x10) {
    fVar1 = func_0059090C(fVar3 * DAT_0067fae8);
    fVar1 = *param_2 - fVar1;
LAB_0067f9e4:
    *param_2 = fVar1;
  }
  else if ((*(uint *)(param_1 + 0x40) & 0x30) == 0x20) {
    fVar1 = *param_2 - fVar3;
    goto LAB_0067f9e4;
  }
  if ((*(uint *)(param_1 + 0x40) & 0x300) == 0x100) {
    fVar4 = func_0059090C(fVar4 * fVar2);
    fVar4 = *param_3 - fVar4;
  }
  else {
    if ((*(uint *)(param_1 + 0x40) & 0x300) != 0x200) goto LAB_0067fa20;
    fVar4 = *param_3 - fVar4;
  }
  *param_3 = fVar4;
LAB_0067fa20:
  if ((*(uint *)(param_1 + 0x40) & 3) == 1) {
    fVar4 = func_0067FB14(param_1,param_4,param_5);
    fVar4 = fVar4 * fVar2;
    fVar2 = func_0059090C(fVar3 * fVar2);
    fVar4 = func_0059090C(fVar4);
    *(float *)(param_1 + 0x10) = *param_2 + (fVar2 - fVar4);
  }
  else if ((*(uint *)(param_1 + 0x40) & 3) == 2) {
    fVar4 = func_0067FB14(param_1,param_4,param_5);
    *(float *)(param_1 + 0x10) = *param_2 + (fVar3 - fVar4);
  }
  else {
    *(float *)(param_1 + 0x10) = *param_2;
  }
  if ((~*(uint *)(param_1 + 0x40) & 0x300) == 0) {
    *(float *)(param_1 + 0x14) = *param_3;
  }
  else {
    fVar4 = func_0056F410((int)param_1);
    *(float *)(param_1 + 0x14) = fVar4 + *param_3;
  }
  return fVar3;
}

