using namespace std;
#include <vector>

struct vec3d
{
	float x, y, z;
};
struct triangle
{
	vec3d p[3];
};

struct mesh
{
	vector<triangle> tris;
};

struct mat4x4
{
	float m[4][4] = { 0 };
};
