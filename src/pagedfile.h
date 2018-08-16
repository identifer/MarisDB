#ifndef __MARISDB_PAGED_FILE_H__
#define __MARISDB_PAGED_FILE_H__

#include <cstdio>
#include <filesystem>
#include <string>

namespace MarisDB
{
    class PagedFile
    {
    public:
        PagedFile(const std::filesystem::path& path, std::FILE* file);
        ~PagedFile();

        const std::filesystem::path& path() const
        {
            return path_;
        }

        FILE* rawFile() const
        {
            return file_;
        }

    private:
        std::filesystem::path path_;
        FILE* file_ = nullptr;
    };
}

#endif // __MARISDB_PAGED_FILE_H__
