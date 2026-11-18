#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002B7CAC(int param_1,uint param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0055C524(int *param_1);
extern int func_0058A7D4(void);
extern int *DAT_003950fc;
extern float DAT_00395100;
extern float DAT_00395104;
extern float DAT_00395108;
extern int DAT_0039510c;

// USA 00394FD0 <- EU 00394FAC (Ghidra, non-matching)
// GLOBAL DAT_003950fc int *
// GLOBAL DAT_00395100 float
// GLOBAL DAT_00395104 float
// GLOBAL DAT_00395108 float
// GLOBAL DAT_0039510c int

undefined4 func_00394FD0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined8 *)(albw_frame + 0x0))
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  piVar1 = DAT_003950fc;
  bVar2 = func_00556EAC(*DAT_003950fc,0x44);
  if ((bVar2) || (bVar2 = func_00556EAC(*piVar1,0x45), bVar2)) {
    puVar3 = (uint *)func_0058A7D4();
    uVar4 = func_00111A64(puVar3);
    uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * DAT_00395100,3);
    if ((uint)((ulonglong)uVar4 * 0x65 >> 0x20) <= uVar6) {
      func_00115C70((float *)&local_40,(float *)(*param_1 + 0x3d0),*(float **)(*piVar1 + 0x1c));
      func_004D80A4(&local_2c,**(uint **)(*piVar1 + 0x24),DAT_00395104);
      local_28 = DAT_00395108;
      if (DAT_0039510c <
          (int)ALBW_AS_U32((ALBW_AS_F32(local_40) * local_2c + ALBW_AS_F32(((ulonglong)local_40 >> 0x20)) * DAT_00395108 +
               fStack_38 * local_24))) {
        func_002B7CAC(*param_1,2,1);
        return 1;
      }
    }
  }
  iVar5 = func_0055C524(param_1);
  if (iVar5 != 0) {
    puVar3 = (uint *)func_0058A7D4();
    uVar4 = func_00111A64(puVar3);
    if ((uint)((ulonglong)uVar4 * 0x65 >> 0x20) < 0x1f) {
      *(undefined1 *)((int)param_1 + 0x13) = 2;
      *(undefined1 *)((int)param_1 + 0x12) = 0;
      return 1;
    }
  }
  return 0;
}

