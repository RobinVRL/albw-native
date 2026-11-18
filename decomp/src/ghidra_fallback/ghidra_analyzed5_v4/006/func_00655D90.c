#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_0011FE98(float *param_1,float *param_2);
extern int func_0028F81C(int param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0058A960(int param_1);
extern int func_00660AE4(int param_1,undefined4 param_2);
extern int func_00660B50(int param_1);
extern int *DAT_00655f08;

// USA 00655D90 <- EU 00655D68 (Ghidra, non-matching)
// GLOBAL DAT_00655f08 int *

void func_00655D90(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define afStack_70 ((float *)(albw_frame + 0x0))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  if ((short)param_1[0x239] != 0) {
    *(short *)(param_1 + 0x239) = (short)param_1[0x239] + -1;
  }
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    if ((((char)param_1[0x23d] != '\b' && (char)param_1[0x23d] != '\t') &&
        (iVar1 = func_0058A960((int)param_1), iVar1 == 0)) &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_00660AE4((int)(param_1 + 0x23c),8);
      func_003931EC(param_1 + 0x23c,8);
      func_00660B50((int)(param_1 + 0x23c));
    }
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    pfVar4 = (float *)param_1[0x241];
    piVar3 = (int *)(param_1[0x243] + (char)param_1[0x23d] * 8);
    uVar2 = *(uint *)(param_1[0x243] + (char)param_1[0x23d] * 8 + 4);
    if ((uVar2 & 1) != 0) {
      piVar3 = (int *)(*piVar3 + *(int *)((int)pfVar4 + ((int)uVar2 >> 1)));
    }
    (*(code *)*piVar3)();
    iVar1 = param_1[0x23c] + 1;
    param_1[0x23c] = iVar1;
    if (param_1[0x240] != 0) {
      fVar5 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x240],1,fVar5);
    }
    fVar5 = func_004F898C();
    func_004F8964((float *)(param_1 + 0xf8),1,fVar5);
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar4);
    if ((*(char *)((int)param_1 + 0x916) != '\0') && (iVar1 = *DAT_00655f08, iVar1 != 0)) {
      func_001119F4(afStack_70,
                    (undefined4 *)
                    (*(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x234] * 0x30));
      func_0011FE98(afStack_40,afStack_70);
      func_0028F81C(iVar1,afStack_40,(int)(char)param_1[0x23b],
                    (uint)*(ushort *)((int)param_1 + 0x8ea));
    }
  }
  return;
}

