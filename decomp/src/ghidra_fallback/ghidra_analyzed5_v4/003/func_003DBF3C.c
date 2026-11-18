#include "ghidra_types.h"

extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_003D290C(undefined4 param_1,undefined4 param_2);
extern int func_003DC2E4(void);
extern int func_003DDA44(int param_1,int param_2,ushort *param_3);
extern float func_00590EC8(float fparam_0,float fparam_1);
extern float DAT_003dc25c;
extern uint DAT_003dc260;
extern float DAT_003dc264;
extern uint *DAT_003dc268;
extern uint DAT_003dc26c;
extern float DAT_003dc270;
extern float DAT_003dc274;
extern float DAT_003dc278;
extern float DAT_003dc27c;
extern int DAT_003dc280;
extern float DAT_003dc284;
extern float DAT_003dc288;

// USA 003DBF3C <- EU 003DBF1C (Ghidra, non-matching)
// GLOBAL DAT_003dc25c float
// GLOBAL DAT_003dc260 uint
// GLOBAL DAT_003dc264 float
// GLOBAL DAT_003dc268 uint *
// GLOBAL DAT_003dc26c uint
// GLOBAL DAT_003dc270 float
// GLOBAL DAT_003dc274 float
// GLOBAL DAT_003dc278 float
// GLOBAL DAT_003dc27c float
// GLOBAL DAT_003dc280 int
// GLOBAL DAT_003dc284 float
// GLOBAL DAT_003dc288 float

undefined4 func_003DBF3C(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 ((ushort *)(albw_frame + 0x8))
  #define local_62 (*(undefined2 *)(albw_frame + 0xe))
  #define local_60 (*(uint *)(albw_frame + 0x10))
  #define local_5c (*(uint *)(albw_frame + 0x14))
  #define local_58 (*(uint *)(albw_frame + 0x18))
  #define local_54 (*(uint *)(albw_frame + 0x1c))
  #define local_50 (*(uint *)(albw_frame + 0x20))
  #define local_4c (*(undefined2 *)(albw_frame + 0x24))
  #define local_4a (*(undefined2 *)(albw_frame + 0x26))
  #define local_48 ((short *)(albw_frame + 0x28))
  #define local_40 (*(undefined2 *)(albw_frame + 0x30))
  #define local_3e (*(undefined2 *)(albw_frame + 0x32))
  #define local_3c ((undefined2 *)(albw_frame + 0x34))
  if (*(byte *)((int)param_1 + 0xd) < 2) {
    iVar2 = 0;
    if (*param_1 != 0) {
      iVar2 = param_1[2];
    }
    if (*param_1 != 0 && iVar2 != 0) {
      if (((((DAT_003dc25c <= ALBW_AS_F32(param_2[3])) && (param_2[3] < 0x3f800001)) &&
           (DAT_003dc25c <= ALBW_AS_F32(param_2[4]))) &&
          ((param_2[4] < 0x3f800001 && (DAT_003dc25c <= ALBW_AS_F32(param_2[6]))))) &&
         (param_2[6] < 0x3f800001)) {
        uVar3 = in_fpscr & 0xfffffff | (uint)(DAT_003dc25c <= ALBW_AS_F32(param_2[7])) << 0x1d;
        if ((SUB41(uVar3 >> 0x1d,0)) && (param_2[7] < 0x3f800001)) {
          uVar8 = (uint)((ulonglong)(uint)(*param_2 * 1000) * (ulonglong)DAT_003dc260 >> 0x2c);
          if (uVar8 == 0) {
            uVar8 = 1;
          }
          local_4c = (undefined2)uVar8;
          uVar7 = (uint)((ulonglong)(uint)(param_2[2] * 1000) * (ulonglong)DAT_003dc260 >> 0x2c);
          if (uVar7 == 0) {
            uVar7 = 1;
          }
          local_4a = (undefined2)uVar7;
          local_62 = 2;
          puVar6 = (uint *)param_2[5];
          if ((uint *)param_2[5] == (uint *)0x0) {
            puVar6 = DAT_003dc268;
          }
          fVar9 = (float)VectorUnsignedToFloat(param_2[1],(byte)(uVar3 >> 0x15) & 3);
          local_48[0] = (short)(uint)((ulonglong)*puVar6 * (ulonglong)DAT_003dc26c >> 0x27);
          fVar14 = fVar9 * DAT_003dc264 * DAT_003dc270;
          local_48[1] = (short)(uint)((ulonglong)puVar6[1] * (ulonglong)DAT_003dc26c >> 0x27);
          iVar2 = 0;
          fVar9 = DAT_003dc27c;
          fVar12 = DAT_003dc274;
          fVar13 = DAT_003dc278;
          do {
            fVar10 = (float)VectorSignedToFloat(local_48[iVar2] * 0xa0,(byte)(uVar3 >> 0x15) & 3);
            fVar15 = fVar13;
            func_00590EC8(fVar13,(fVar10 * fVar12) / fVar14);
            iVar5 = iVar2 + 1;
            local_3c[iVar2] = (short)(int)(fVar13 * fVar9);
            iVar2 = iVar5;
            fVar13 = fVar15;
          } while (iVar5 < 2);
          uVar11 = VectorFloatToUnsigned(ALBW_AS_F32(param_2[6]) * fVar9,3);
          local_48[3] = (short)uVar11;
          uVar11 = VectorFloatToUnsigned(ALBW_AS_F32(param_2[7]) * fVar9,3);
          local_40 = (undefined2)uVar11;
          uVar11 = VectorFloatToUnsigned(ALBW_AS_F32(param_2[3]) * fVar9,3);
          local_3e = (undefined2)uVar11;
          local_48[2] = (short)(uint)((ulonglong)puVar6[2] * (ulonglong)DAT_003dc26c >> 0x27);
          fVar12 = ALBW_AS_F32(param_2[4]);
          if (DAT_003dc280 < param_2[4]) {
            fVar12 = DAT_003dc284;
          }
          if ((char)param_2[8] == '\x01') {
            fVar13 = -fVar12;
            fVar14 = fVar12 - DAT_003dc288;
          }
          else {
            fVar14 = DAT_003dc288 - fVar12;
            fVar13 = fVar12;
          }
          uVar8 = uVar8 * 0x500;
          local_3c[2] = (undefined2)(int)(fVar14 * fVar9);
          local_3c[3] = (undefined2)(int)(fVar13 * fVar9);
          iVar2 = *param_1;
          local_60 = iVar2 + 0xc000000U >> 0x10 | iVar2 << 0x10;
          if (uVar8 <= (uint)param_1[2]) {
            local_5c = iVar2 + uVar8 + 0xc000000 >> 0x10 | (iVar2 + uVar8) * 0x10000;
            uVar8 = uVar8 + uVar7 * 0x500;
            if (uVar8 <= (uint)param_1[2]) {
              local_58 = iVar2 + uVar8 + 0xc000000 >> 0x10 | (iVar2 + uVar8) * 0x10000;
              iVar5 = uVar8 + local_48[0] * 0x500;
              iVar4 = iVar2 + iVar5;
              local_54 = iVar4 + 0xc000000U >> 0x10 | iVar4 * 0x10000;
              uVar3 = iVar5 + local_48[1] * 0x500;
              if (uVar3 <= (uint)param_1[2]) {
                iVar2 = iVar2 + uVar3;
                local_50 = iVar2 + 0xc000000U >> 0x10 | iVar2 * 0x10000;
              }
            }
          }
          local_68[0] = 6;
          func_001164F4((undefined4 *)*param_1,param_1[2]);
          func_003D290C(*param_1,param_1[2]);
          cVar1 = *(char *)((int)param_1 + 0xd);
          iVar2 = func_003DC2E4();
          uVar11 = func_003DDA44(iVar2,(int)cVar1,local_68);
          return uVar11;
        }
      }
    }
  }
  return 0;
}

