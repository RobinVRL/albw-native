#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004C1088(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_006260FC(int param_1,int param_2,undefined1 param_3);
extern float DAT_00312580;
extern int DAT_00312584;
extern int DAT_00312588;
extern int DAT_0031258c;
extern float DAT_00312590;
extern float DAT_00312594;
extern float DAT_00312598;
extern float DAT_0031259c;
extern int DAT_003125a0;

// USA 00312420 <- EU 003123FC (Ghidra, non-matching)
// GLOBAL DAT_00312580 float
// GLOBAL DAT_00312584 int
// GLOBAL DAT_00312588 int
// GLOBAL DAT_0031258c int
// GLOBAL DAT_00312590 float
// GLOBAL DAT_00312594 float
// GLOBAL DAT_00312598 float
// GLOBAL DAT_0031259c float
// GLOBAL DAT_003125a0 int

undefined4 func_00312420(int *param_1)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  if ((char)param_1[0x28f] == '\0') {
    return func_006260FC((int)param_1,0xc,0);
  }
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&local_18,pfVar1,(float *)(param_1 + 0xf4));
  uVar2 = func_004904CC(local_18,local_10);
  if (*(char *)((int)param_1 + 0x852) == '\0') {
    local_18 = ALBW_AS_F32((param_1[0xfa] - uVar2));
    iVar3 = func_0058E2B8((int *)&local_18);
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    if (DAT_00312584 < (int)ALBW_AS_U32((fVar4 * DAT_00312580))) {
      (**(code **)(*param_1 + 0xac))(param_1,2,0xffffffff);
    }
  }
  else if ((*(char *)((int)param_1 + 0x852) == '\x02') &&
          (iVar3 = func_0051D2F4(param_1 + 0xfa,uVar2,DAT_0031258c,DAT_00312588,DAT_00312590),
          iVar3 != 0)) {
    (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
  }
  iVar3 = func_004C1088((int)param_1,0x80000000,DAT_00312598,DAT_00312594);
  if (iVar3 == 0) {
    local_18 = ALBW_AS_F32(param_1[0xf4]);
    iStack_14 = param_1[0xf5];
    local_10 = ALBW_AS_F32(param_1[0xf6]);
    func_004D8054(&local_18,uVar2,DAT_0031259c);
    if ((int)ALBW_AS_U32(((local_18 - ALBW_AS_F32(param_1[0x288])) * (local_18 - ALBW_AS_F32(param_1[0x288])) +
             (local_10 - ALBW_AS_F32(param_1[0x28a])) * (local_10 - ALBW_AS_F32(param_1[0x28a])))) < DAT_003125a0
       ) {
      func_006260FC((int)param_1,0xc,0);
    }
  }
  return 0;
}

