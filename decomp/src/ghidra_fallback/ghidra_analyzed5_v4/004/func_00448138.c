// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B694(int param_1,float fparam_0);
extern int func_0025B788(int param_1,int param_2);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_00533048(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00539200(int param_1);
extern int DAT_004481fc;
extern undefined4 DAT_00448200;
extern int DAT_00448204;
extern float DAT_00448208;
extern float DAT_0044820c;
extern float DAT_00448210;
extern float DAT_00448214;
extern int DAT_00448218;

// USA 00448138 <- EU 00448110 (Ghidra, non-matching)
// GLOBAL DAT_004481fc int
// GLOBAL DAT_00448200 undefined4
// GLOBAL DAT_00448204 int
// GLOBAL DAT_00448208 float
// GLOBAL DAT_0044820c float
// GLOBAL DAT_00448210 float
// GLOBAL DAT_00448214 float
// GLOBAL DAT_00448218 int

void func_00448138(undefined4 param_1,int param_2,float fparam_0)

{
  bool bVar1;
  float fVar2;
  float fparam_0_00;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_80 ((undefined4 *)(albw_frame + 0x0))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(undefined4 *)(albw_frame + 0x64))
  if (DAT_004481fc < (int)ALBW_AS_U32(fparam_0)) {
    func_0010A464(auStack_80);
    local_1c = DAT_00448200;
    local_20 = DAT_00448204;
    func_00533048(param_1,&local_20,auStack_80);
    bVar1 = func_00539200((int)auStack_80);
    if (bVar1) {
      fVar2 = fparam_0 * DAT_00448208;
      fparam_0_00 = DAT_00448210;
      fparam_1 = DAT_00448210;
      if ((DAT_00448210 <= fVar2) &&
         (fparam_0_00 = fVar2, fparam_1 = DAT_0044820c, DAT_0044820c < fVar2)) {
        fparam_0_00 = DAT_0044820c;
      }
      fVar2 = DAT_0044820c;
      func_0025B860((int)auStack_80,0,fparam_0_00,fparam_1);
      func_0025B694((int)auStack_80,fVar2 + fparam_0 * DAT_00448214);
      if ((param_2 != 0) && ((int)ALBW_AS_U32(fparam_0) < DAT_00448218)) {
        func_0025B788((int)auStack_80,3);
      }
    }
    func_0025B874(auStack_80);
  }
  return;
}

