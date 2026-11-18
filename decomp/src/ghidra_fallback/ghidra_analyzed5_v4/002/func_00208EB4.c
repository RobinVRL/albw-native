#include "ghidra_types.h"

extern int func_0020B768(uint param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004ED46C(int param_1,int param_2);
extern int func_004F8738(undefined4 *param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_00531080(undefined4 param_1,uint param_2,uint param_3,int param_4,undefined1 *param_5);
extern int func_0053114C(int param_1,uint param_2,float *param_3,float *param_4);
extern int func_00588BE4(int param_1);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int DAT_0020914c;
extern float DAT_00209150;
extern int *DAT_00209154;
extern int *DAT_00209158;
extern undefined DAT_0020915c;
extern int *DAT_00209160;
extern int DAT_00209164;
extern undefined4 DAT_00209168;
extern undefined4 DAT_0020916c;
extern int DAT_00209170;

// USA 00208EB4 <- EU 00208EB4 (Ghidra, non-matching)
// GLOBAL DAT_0020914c int
// GLOBAL DAT_00209150 float
// GLOBAL DAT_00209154 int *
// GLOBAL DAT_00209158 int *
// GLOBAL DAT_0020915c undefined
// GLOBAL DAT_00209160 int *
// GLOBAL DAT_00209164 int
// GLOBAL DAT_00209168 undefined4
// GLOBAL DAT_0020916c undefined4
// GLOBAL DAT_00209170 int

/* WARNING: Variable defined which should be unmapped: objStack_48 */

undefined4 func_00208EB4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_44 ((char *)(albw_frame + 0xc))
  #define local_2c (*(uint *)(albw_frame + 0x24))
  #define local_28 (*(int *)(albw_frame + 0x28))
  #define iStack_24 (*(int *)(albw_frame + 0x2c))
  puVar3 = (undefined4 *)(param_1 + 0x8bc);
  if (*(char *)(param_1 + 0xa6c) == '\0') {
    func_0051D2F4((int *)(param_1 + 0xc3c),*(int *)(param_1 + 0xc40),DAT_0020914c,0x7fffffff,
                  DAT_00209150);
    *(int *)(param_1 + 0x9e0) = *(int *)(param_1 + 0xc3c) - *(int *)(param_1 + 1000);
    if (*(char *)(param_1 + 0xa6c) == '\0') {
      func_004F8738(objStack_48);
      iVar2 = func_0053114C(param_1,*(uint *)(param_1 + 0xc3c),(float *)objStack_48,(float *)0x0);
      if (iVar2 != 0) {
        iVar2 = func_0052FBA0(*DAT_00209154 + 0x3dbbc,local_2c);
        if ((iVar2 != 0) && (iVar2 = func_00588BE4(iVar2), iVar2 == *DAT_00209158)) {
          if (*(int *)(param_1 + 0x344) == 0) {
            iStack_24 = 0;
            local_28 = 0;
          }
          else {
            func_004A1B9C(&local_28,*(int *)(param_1 + 0x344),(uint *)&DAT_0020915c);
          }
          if ((local_28 != 0) && (*(int *)(local_28 + 0x1c) == iStack_24)) {
            func_004A2F38(local_28,objStack_48);
          }
          func_0020B768(local_2c);
          func_004ED46C(*DAT_00209160,1);
          func_0065D630(puVar3,0x28);
        }
        *(undefined1 *)(param_1 + 0xa6c) = 2;
        *(undefined4 *)(param_1 + 0xc58) = *(undefined4 *)(param_1 + 0xc94);
      }
    }
  }
  if (*(char *)(param_1 + 0xa6c) == '\0') {
    local_44[0] = '\x01';
    fVar4 = func_0058AC38(param_1);
    iVar2 = VectorFloatToUnsigned(fVar4,3);
    fVar4 = func_0058AA40(param_1);
    objStack_48[0] = (uint)local_44;
    fVar4 = func_00531080(param_1,(int)fVar4,0x1e,iVar2,(undefined1 *)objStack_48[0]);
    *(float *)(param_1 + 0xc98) = fVar4;
    *(float *)(param_1 + 0xc94) = fVar4;
    if (local_44[0] != '\0') {
      if (*(char *)(param_1 + 0xc54) == '\0') {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xca0) = DAT_00209168;
      goto LAB_00209134;
    }
    *(float *)(param_1 + 0xc58) = fVar4;
    *(undefined1 *)(param_1 + 0xa6c) = 1;
  }
  else {
    if (*(char *)(param_1 + 0xa6c) == '\x01') {
      fVar4 = func_0058AC38(param_1);
      iVar2 = VectorFloatToUnsigned(fVar4,3);
      fVar4 = func_0058AA40(param_1);
      objStack_48[0] = 0;
      fVar4 = func_00531080(param_1,(int)fVar4,0x1e,iVar2,(undefined1 *)0x0);
      fVar4 = fVar4 * *(float *)(param_1 + 0xc58);
      *(float *)(param_1 + 0xc98) = fVar4;
      *(float *)(param_1 + 0xc94) = fVar4;
      iVar2 = func_0058A8F0(param_1);
      uVar1 = DAT_0020916c;
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xc98) = DAT_0020916c;
        *(undefined4 *)(param_1 + 0xc94) = uVar1;
        if (*(int *)(param_1 + 0xc44) < 1) {
          return func_0065D630(puVar3,0x1a);
        }
        return func_0065D630(puVar3,0x18);
      }
    }
    else {
      fVar4 = func_0058AA40(param_1);
      if (DAT_00209164 <= (int)ALBW_AS_U32(fVar4)) {
        *(undefined1 *)(param_1 + 0xa6c) = 1;
      }
    }
    *(undefined4 *)(param_1 + 0xca0) = 0;
  }
  if (*(char *)(param_1 + 0xc54) == '\0') {
    return 0;
  }
LAB_00209134:
  *(int *)(param_1 + 0xca4) = DAT_00209170 + *(int *)(param_1 + 0xca4);
  return 0;
}

