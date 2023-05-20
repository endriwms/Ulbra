using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;


using aula14_repositorios.Domain.Entities;
using Microsoft.EntityFrameworkCore;

namespace aula14_repositorios.csproj
{
  public class DataContext : DbContext
  {
    public string DbPath { get; }

    public DataContext()
    {
      string path = Directory.GetCurrentDirectory();
      DbPath = System.IO.Path.Join(path, "TestEFQuarta.db");
    }
    protected override void OnConfiguring(DbContextOptionsBuilder options)
        => options.UseSqlite($"Data Source={DbPath}");

    public DbSet<Person> People { get; set; }
    public DbSet<Product> Products { get; set; }
  }
}