#include "ghidra_types.h"

extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern int func_003E63E8(uint *param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6);
extern undefined *DAT_003d5120;
extern uint DAT_003d5124;

// USA 003D4F20 <- EU 003D4F00 (Ghidra, non-matching)
// GLOBAL DAT_003d5120 undefined *
// GLOBAL DAT_003d5124 uint

/* WARNING: Variable defined which should be unmapped: objStack_30 */

void func_003D4F20(int *param_1,int param_2,int *param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  ulonglong uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  objStack_30[1] = (uint)(param_1 + 0x13);
  objStack_30[0] = (uint)(param_1 + 0x14);
  func_003E63E8(*(uint **)(*param_1 + 4),param_2,param_4,param_3,(uint *)objStack_30[0],
                (uint *)objStack_30[1]);
  pcVar2 = DAT_003d5120;
  iVar5 = *param_3 + -1;
  if (-1 < iVar5) {
    uVar9 = (ulonglong)DAT_003d5124;
    do {
      psVar4 = (short *)(param_2 + iVar5 * 6);
      sVar3 = (*pcVar2)((int)*psVar4,(int)(short)param_1[2],(int)(short)param_1[1],
                        (int)*(short *)((int)param_1 + 6));
      *psVar4 = sVar3;
      *(short *)(param_1 + 2) = sVar3;
      sVar3 = (*pcVar2)((int)psVar4[1],(int)*(short *)((int)param_1 + 10),(int)(short)param_1[1],
                        (int)*(short *)((int)param_1 + 6));
      psVar4[1] = sVar3;
      *(short *)((int)param_1 + 10) = sVar3;
      sVar3 = (*pcVar2)((int)psVar4[2],(int)(short)param_1[3],(int)(short)param_1[1],
                        (int)*(short *)((int)param_1 + 6));
      psVar4[2] = sVar3;
      *(short *)(param_1 + 3) = sVar3;
      if ((char)param_1[0x12] != '\0') {
        *psVar4 = *psVar4 - *(short *)((int)param_1 + 0xe);
        psVar4[1] = psVar4[1] - (short)param_1[4];
        psVar4[2] = psVar4[2] - *(short *)((int)param_1 + 0x12);
      }
      if (*(char *)((int)param_1 + 0x49) != '\0') {
        fVar8 = ALBW_AS_F32(uVar9);
        bVar7 = false;
        if (param_1[6] == 0x3f800000) {
          in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[7]) == fVar8) << 0x1e;
          bVar7 = SUB41(in_fpscr >> 0x1e,0);
        }
        if (bVar7) {
          uVar1 = in_fpscr & 0xfffffff;
          in_fpscr = uVar1 | (uint)(ALBW_AS_F32(param_1[8]) == fVar8) << 0x1e;
          bVar7 = false;
          if (SUB41(in_fpscr >> 0x1e,0)) {
            in_fpscr = uVar1 | (uint)(ALBW_AS_F32(param_1[9]) == fVar8) << 0x1e;
            bVar7 = SUB41(in_fpscr >> 0x1e,0);
          }
          bVar6 = false;
          if (bVar7) {
            in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[10]) == fVar8) << 0x1e;
            bVar6 = SUB41(in_fpscr >> 0x1e,0);
          }
          if (bVar6) {
            bVar7 = false;
            if (param_1[0xb] == 0x3f800000) {
              in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0xc]) == fVar8) << 0x1e;
              bVar7 = SUB41(in_fpscr >> 0x1e,0);
            }
            if (bVar7) {
              uVar1 = in_fpscr & 0xfffffff;
              in_fpscr = uVar1 | (uint)(ALBW_AS_F32(param_1[0xd]) == fVar8) << 0x1e;
              bVar7 = false;
              if (SUB41(in_fpscr >> 0x1e,0)) {
                in_fpscr = uVar1 | (uint)(ALBW_AS_F32(param_1[0xe]) == fVar8) << 0x1e;
                bVar7 = SUB41(in_fpscr >> 0x1e,0);
              }
              bVar6 = false;
              if (bVar7) {
                in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0xf]) == fVar8) << 0x1e;
                bVar6 = SUB41(in_fpscr >> 0x1e,0);
              }
              if (bVar6) {
                bVar7 = false;
                if (param_1[0x10] == 0x3f800000) {
                  in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0x11]) == fVar8) << 0x1e;
                  bVar7 = SUB41(in_fpscr >> 0x1e,0);
                }
                if (bVar7) goto LAB_003d510c;
              }
            }
          }
        }
        objStack_30[0] = ALBW_AS_U32(VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3));
        objStack_30[2] = ALBW_AS_U32(VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3));
        objStack_30[1] = ALBW_AS_U32(VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3));
        func_00115074((float *)objStack_30,(float *)(param_1 + 6),(float *)objStack_30);
        *psVar4 = (short)(int)ALBW_AS_F32(objStack_30[0]);
        psVar4[1] = (short)(int)ALBW_AS_F32(objStack_30[1]);
        psVar4[2] = (short)(int)ALBW_AS_F32(objStack_30[2]);
      }
LAB_003d510c:
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}

