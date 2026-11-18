#include "ghidra_types.h"

extern int func_00401160(int param_1,uint *param_2,int param_3);
extern int func_00401498(int param_1,int param_2,undefined4 param_3);
extern int func_004018A8(int param_1,uint *param_2,int param_3);
extern int func_00401C98(int param_1,uint *param_2,int param_3,int param_4,int param_5,float param_6);
extern int func_00402470(int param_1,uint *param_2,int param_3,int *param_4,float *param_5, float *param_6);
extern int func_0040279C(int param_1,uint *param_2,int param_3,int param_4,float *param_5,float *param_6 );
extern int func_00402B98(int param_1,uint *param_2,int param_3,int param_4,float *param_5,float *param_6 );
extern int func_00402F68(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,float *param_5, float *param_6);
extern int func_004030E4(int param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6);

// USA 00403154 <- EU 00403134 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *

uint * func_00403154(int param_1,uint *param_2,int *param_3,int *param_4,float *param_5)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint in_fpscr;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  local_38 = (float)VectorUnsignedToFloat
                              ((uint)*(ushort *)(param_3 + 0x2b),(byte)(in_fpscr >> 0x15) & 3);
  local_34 = ALBW_AS_U32(VectorUnsignedToFloat
                       ((uint)*(ushort *)((int)param_3 + 0xae),(byte)(in_fpscr >> 0x15) & 3));
  local_30 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0x2c),(byte)(in_fpscr >> 0x15) & 3));
  local_2c = ALBW_AS_U32(VectorUnsignedToFloat
                       ((uint)*(ushort *)((int)param_3 + 0xb2),(byte)(in_fpscr >> 0x15) & 3));
  cVar1 = *(char *)((int)param_3 + 0xcd);
  if (cVar1 == '\x01') {
    param_2 = func_00402470(param_1,param_2,(int)param_3,param_4,param_5,&local_38);
  }
  else if (cVar1 == '\x04') {
    param_2 = func_0040279C(param_1,param_2,(int)param_3,(int)param_4,param_5,&local_38);
  }
  else if (cVar1 == '\b') {
    param_2 = func_00402B98(param_1,param_2,(int)param_3,(int)param_4,param_5,&local_38);
  }
  if (((*(byte *)((int)param_3 + 0xce) & 4) == 0) && (param_3[0x35] != 0)) {
    puVar2 = (uint *)func_004030E4(param_1,param_2,1,0,7,0);
    if ((*(byte *)((int)param_3 + 0xce) & 1) == 0) {
      func_00401498(param_1,(int)(param_3 + 0x2d),(uint)*(byte *)((int)param_3 + 0x46));
    }
    iVar3 = param_3[0x35];
    puVar2 = (uint *)func_00401160(param_1,puVar2,iVar3);
    puVar2 = func_004018A8(param_1,puVar2,iVar3);
    puVar2 = func_00401C98(param_1,puVar2,(int)param_4,(int)param_3,iVar3,ALBW_AS_F32(param_3[0x32]));
    param_2 = (uint *)func_00402F68(param_1,puVar2,param_3,param_4,param_5,&local_38);
  }
  return param_2;
}

