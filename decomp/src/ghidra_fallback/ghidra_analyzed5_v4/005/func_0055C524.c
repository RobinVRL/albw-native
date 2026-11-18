#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int *DAT_0055c624;
extern float DAT_0055c628;
extern float DAT_0055c62c;

// USA 0055C524 <- EU 0055C4FC (Ghidra, non-matching)
// GLOBAL DAT_0055c624 int *
// GLOBAL DAT_0055c628 float
// GLOBAL DAT_0055c62c float

undefined4 func_0055C524(int *param_1)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined8 *)(albw_frame + 0x8))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c ((float *)(albw_frame + 0x14))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  piVar2 = DAT_0055c624;
  bVar1 = false;
  bVar3 = func_00556EAC(*DAT_0055c624,0x35);
  if (((bVar3) || (bVar3 = func_00556EAC(*piVar2,0x4c), bVar3)) ||
     (bVar3 = func_00556EAC(*piVar2,0x4b), bVar3)) {
    bVar1 = true;
  }
  bVar3 = func_00556EAC(*piVar2,0x34);
  if ((((bVar3) ||
       ((bVar3 = func_00556EAC(*piVar2,0x53), bVar3 && (uVar4 = func_0055696C(*piVar2,7), 2 < uVar4)
        ))) && (*(char *)(*param_1 + 0xe00) == '\r')) || (bVar1)) {
    func_00115C70((float *)&local_38,(float *)(*param_1 + 0x3d0),*(float **)(*piVar2 + 0x1c));
    func_004D80A4(local_2c,**(uint **)(*piVar2 + 0x24),DAT_0055c628);
    if (0x3f000000 <
        (int)ALBW_AS_U32((ALBW_AS_F32(local_38) * local_2c[0] + ALBW_AS_F32(((ulonglong)local_38 >> 0x20)) * DAT_0055c62c +
             fStack_30 * local_24))) {
      return 1;
    }
  }
  return 0;
}

