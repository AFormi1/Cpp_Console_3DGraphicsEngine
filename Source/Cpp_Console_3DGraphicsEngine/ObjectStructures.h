using namespace std;
#include <vector>
#include <fstream>
#include <strstream>

struct vec3d
{
	float x, y, z;
};
struct triangle
{
	vec3d p[3];

	wchar_t sym;
	short col;
};

struct mesh
{
	vector<triangle> tris;
	bool LoadFromObjectFile(string sFilename)
	{
		ifstream f(sFilename);

		if (!f.is_open())
		{
			return false;
		}

		vector<vec3d> verts;

		while (!f.eof())
		{
			char line[1000];
			f.getline(line, 1000);

			strstream s;

			s << line;

			char junk;

			if (line[0] == 'v')
			{
				vec3d v;
				s >> junk >> v.x >> v.y >> v.z;
				verts.push_back(v);
			}
			if (line[0] == 'f')
			{
				int f[3];

				vec3d v;
				s >> junk >> f[0] >> f[1] >> f[2];
				tris.push_back({ verts[f[0] - 1], verts[f[1] - 1], verts[f[2] - 1] });
			}


		}

		return true;
	};
};

struct mat4x4
{
	float m[4][4] = { 0 };
};


