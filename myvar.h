#ifndef MYVAR
#define MYVAR

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


typedef struct{
  int width;
  int height;
  int channels;
  unsigned char *img;
}MPI_myvar;
  

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* myvar */
