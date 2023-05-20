using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using aula12_03_05_2023.Domain;
using Microsoft.EntityFrameworkCore;

namespace aula12_03_05_2023.csproj
{
  public class DataContext : DbContext
  {
    public string DbPath { get; }

    public DataContext()
    {
      var folder = Environment.SpecialFolder.LocalApplicationData;
      var path = Environment.GetFolderPath(folder);
      DbPath = System.IO.Path.Join(path, "TestEf.db");
    }
    protected override void OnConfiguring(DbContextOptionsBuilder options)
        => options.UseSqlite($"Data Source={DbPath}");

    public DbSet<Person> People { get; set; }
    public DbSet<Product> Products { get; set; }
  }
}