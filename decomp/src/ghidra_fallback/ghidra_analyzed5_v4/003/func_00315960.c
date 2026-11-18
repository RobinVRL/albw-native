#include "ghidra_types.h"

extern int func_001507A8(int param_1,int param_2);
extern int func_003154F4(int *param_1,int param_2);
extern int func_00315760(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_00315ad0;
extern float DAT_00315ad4;
extern int DAT_00315ad8;
extern int *DAT_00315adc;
extern int *DAT_00315ae0;
extern int *DAT_00315ae4;
extern int *DAT_00315ae8;
extern int *DAT_00315aec;

// USA 00315960 <- EU 0031593C (Ghidra, non-matching)
// GLOBAL DAT_00315ad0 int *
// GLOBAL DAT_00315ad4 float
// GLOBAL DAT_00315ad8 int
// GLOBAL DAT_00315adc int *
// GLOBAL DAT_00315ae0 int *
// GLOBAL DAT_00315ae4 int *
// GLOBAL DAT_00315ae8 int *
// GLOBAL DAT_00315aec int *

uint func_00315960(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  piVar1 = DAT_00315ad0;
  uVar2 = (uint)*(byte *)(param_1 + 0x116);
  bVar4 = uVar2 == 1;
  if (bVar4) {
    uVar2 = param_1[0x125];
  }
  if (!bVar4 || uVar2 != 0) {
    iVar3 = func_0052FBA0(*DAT_00315ad0 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    uVar2 = 0;
    if (iVar3 != 0) {
      fVar5 = *(float *)(param_2 + 8);
      if (fVar5 <= DAT_00315ad4) {
        fVar5 = -fVar5;
      }
      if ((int)ALBW_AS_U32(fVar5) <= DAT_00315ad8) {
        func_00588BE4(iVar3);
        iVar3 = func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_2 + 0x28));
        if (iVar3 == 0) {
LAB_00315a30:
          if (((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x160) &&
             ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x10U) != 0)) {
            func_00315760((int)param_1,param_2);
          }
          bVar4 = func_001507A8((int)param_1,param_2);
          if (bVar4) {
            local_18 = func_0068C690((float *)(param_2 + 4));
            local_18 = (param_1[0xfa] + -0x80000000) - local_18;
            iVar3 = func_0058E2B8(&local_18);
            if (iVar3 < *DAT_00315aec) {
              iVar3 = func_003154F4(param_1,param_2);
              return (uint)(iVar3 != 0);
            }
          }
          *(undefined1 *)(param_1 + 0x146) = 0;
          return 0;
        }
        iVar3 = func_00588BE4(iVar3);
        if ((iVar3 == *DAT_00315adc) && ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x1a0)) {
          func_00315760((int)param_1,param_2);
        }
        if (((iVar3 != *DAT_00315ae0) && (iVar3 != *DAT_00315ae4)) && (iVar3 != *DAT_00315ae8))
        goto LAB_00315a30;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

